#include <unordered_map>
#include <vector>
#include <algorithm>
#include <iostream>
namespace CP{ 
template<class Key, class T> 
class geometric_hash_grid { 
  protected: 
    // เพมฟังก์ชันหรือข้อมูลใด ๆ ได้ 
    std::unordered_map<int,std::unordered_map<int,std::vector<T>>> m;
  public: 
    gometric_hash_grid() { 
        std::unordered_map<int,std::unordered_map<int,std::vector<T>>> mp;
        m = mp;
    } 
    void insert(int x, int y, const T& data) { 
        m[x][y].push_back(data);
    } 
    void remove(int x, int y, const T& data) { 
        auto it = std::find(m[x][y].begin(),m[x][y].end(),data);
        if (it != m[x][y].end()){
            m[x][y].erase(it);
        }
    } 
    std::vector<T> getDataAt(int x, int y) { 
        return m[x][y];
    } 
    std::vector<T> neighbors(int x, int y) { 
        std::vector <T> vp;
        for (int i = -1;i<=1;i++){
            for (int j = -1;j<=1;j++){
                for (int k = 0;k<m[x+i][y+j].size();k++){
                    vp.push_back(m[x+i][y+j][k]);
                }
            }
        }
        return vp;
    } 
}; 
} 

int main(){
    CP::geometric_hash_grid<int,char> m;
    m.insert(10,999,'A');
    m.insert(10,998,'B');
    m.insert(10,999,'T');
    std::vector <char> p = m.getDataAt(9,998);
    if (p.size() == 0)std::cout << "Blank "<<std::endl; 
    for (auto &e:p)std::cout << e << " ";
}