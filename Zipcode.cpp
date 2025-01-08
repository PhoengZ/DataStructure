#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
class Letter{
public:
    string name; string address; string province; string district; int zip;
    bool operator < (const Letter& other) const {
        if (this->zip == other.zip){
            if (this->address == other.address){
                if (this->district == other.district){
                    if (this->province == other.province){
                        return this->name < other.name;
                    }else{
                        return this->province < other.province;
                    }
                }else{
                    return this->district < other.district;
                }
            }else{
                return this->address < other.address;
            }
        }
        return this->zip < other.zip;
    }
};
class ZipInfo{
public:
    int zip;
    string province;
    string district;
};
void correctZipAndSortLetters(vector<ZipInfo>& zipinfo, vector<Letter>& letters) {
    map <pair<string,string>,int> p_d_zip;
    for (int i = 0;i<zipinfo.size(); i++){
        pair <string,string> p = make_pair(zipinfo[i].province,zipinfo[i].district);
        p_d_zip[p] = zipinfo[i].zip;
    }
    for (int i = 0;i<letters.size();i++){
        pair <string,string> p = make_pair(letters[i].province,letters[i].district);
        if (p_d_zip[p] != letters[i].zip){
            letters[i].zip =  p_d_zip[p];
        }
    }
    sort(letters.begin(),letters.end());
}
int main() {
    int nzip;
    cin>>nzip;
    vector<ZipInfo> zipinfo;
    for (int i = 0; i < nzip; i++) {
        ZipInfo z;
        cin>>z.zip>>z.district>>z.province;
        zipinfo.push_back(z);
    }
    int n;
    cin>>n;
    vector<Letter> letters;
    for (int i = 0; i < n; i++) {
        Letter l;
        cin>>l.name>>l.address>>l.district>>l.province>>l.zip;
        letters.push_back(l);
    }
    correctZipAndSortLetters(zipinfo, letters);
    for (auto& l:letters) {
        cout<<l.name<<" "<<l.address<<" "<<l.district<<" "<<l.province<<" "<<l.zip<<endl;
    }
}