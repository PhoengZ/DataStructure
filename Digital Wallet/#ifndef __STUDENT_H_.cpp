#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <string>
#include <queue>
#include <unordered_map>
#include <algorithm>

// you can include anything

using namespace std;

class DigitalWallet
{
  // you can declare variables or write new function
private:
  // unordered_map<string, size_t> latest_time;

  // unordered_map<string, deque<pair<size_t, long long>>> expires;
  // long long latest_time;

  deque<pair<size_t, unordered_map<string, long long>>> expires; // first = expire time, second = id->amount

  unordered_map<string, long long> latest_money;

  unordered_map<string, long long> cumu_spent;

  long long gave = 0;
  long long spent = 0;
  long long expired = 0;

  void update_expire(size_t time)
  {
    // cout << "update expire time " << time << endl;
    while (!expires.empty() && time >= expires.front().first)
    {
      for (auto &p : expires.front().second)
      {
        long long c = cumu_spent[p.first];
        long long amt = p.second;
        long long sub = min(c, amt);

        c -= sub;
        cumu_spent[p.first] = c;
        amt -= sub;
        latest_money[p.first] -= amt;

        expired += amt;

        // cout << p.first << " expires for " << amt << "$\n";
      }

      expires.pop_front();
    }
    // while(!expires[id].empty() && time >= expires[id].front().first){
    //   long long c = cumu_spent[id];
    //   long long amt = expires[id].front().second;
    //   long long sub = min(c, amt);

    //   c -= sub;
    //   cumu_spent[id] = c;
    //   amt -= sub;
    //   latest_money[id] -= amt;

    //   expires[id].pop_front();
    // }
  }

public:
  void add_money(size_t time, string person_id, int amount, size_t duration)
  {
    // your code here
    update_expire(time);
    latest_money[person_id] += amount;
    gave += amount;

    size_t expire_time = time + duration + 1;
    if (expires.empty() || expires.back().first != expire_time)
      expires.push_back(make_pair(expire_time, unordered_map<string, long long>()));
    expires.back().second[person_id] += amount;
  }

  bool use_money(size_t time, string person_id, int amount)
  {
    // your code here
    update_expire(time);
    if (latest_money[person_id] >= amount)
    {
      latest_money[person_id] -= amount;
      cumu_spent[person_id] += amount;
      spent += amount;
      return true;
    }
    else
    {
      return false;
    }
  }

  int current_money(size_t time, string person_id)
  {
    // your code here
    update_expire(time);
    return latest_money[person_id];
  }

  void status(size_t time, long long &total_give, long long &total_spent,
              long long &total_expired)
  {
    // your code here
    update_expire(time);
    total_give = gave;
    total_spent = spent;
    total_expired = expired;
  }
};

#endif

