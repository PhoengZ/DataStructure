#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <string>
#include <unordered_map>
#include <list>
#include <queue>
// you can include anything

using namespace std;

class DigitalWallet {
  // you can declare variables or write new function
  long long total_spent = 0;
  long long total_expired = 0;
  long long total_give = 0;
  unordered_map<string,list<pair<long long,long long>>> id_time;
 public:
  void add_money(size_t time, string person_id, int amount, size_t duration) {
    // your code here
    total_give+= amount;
    id_time[person_id].push_back({amount,time+duration});

  }

  bool use_money(size_t time, string person_id, int amount) {
    // your code here
    long long mn = 0;
    auto it = id_time[person_id].begin();
    list<pair<long long,long long>> l;
    while (it != id_time[person_id].end() && mn < amount){
      auto tmp = it;
      it++;
      if (mn >= amount)break;
      if (tmp->second >= time){
        if (mn+tmp->first >= amount){
          tmp->first-= (amount-mn);
          total_spent+= amount;
          return true;
        }
        l.push_back({tmp->first,tmp->second});
        mn+=tmp->first;
        id_time[person_id].pop_front();
      }else{
        total_expired+=tmp->first;
        id_time[person_id].pop_front();
      }
    }
    id_time[person_id] = l;
    return false;
  }

  int current_money(size_t time, string person_id) {
    // your code here
    long long money = 0;
    auto it = id_time[person_id].begin();
    while (it != id_time[person_id].end()){
      auto e = it;
      it++;
      if (e->second >= time){
        money+= e->first;
      }else{
        total_expired+= e->first;
        id_time[person_id].pop_front();
      }
    }return money;
  }

  void status(size_t time, long long &total_give, long long &total_spent,
              long long &total_expired) {
    // your code here
    auto it = id_time.begin();
    while (it != id_time.end()){
      auto bt = it->second.begin();
      while (bt != it->second.end() && bt->second < time){
        auto bp = bt;
        bt++;
        if (bp->second < time){
          this->total_expired+= bp->first;
          it->second.pop_front();
        }
      }
      it++;
    }
    total_give = this->total_give;
    total_spent = this-> total_spent;
    total_expired = this->total_expired;
  }
};

#endif
