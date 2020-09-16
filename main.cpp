#include <iostream>

using std::cout;
using std::endl;
using std::string;


int lengthOfLongestSubstring(string s) {
  size_t longest = 0;
  std::string sset;
  sset.reserve(s.length());
  for(int i = 0; i < s.length(); ++i){
    auto found = sset.find(s[i]);
    if(found != string::npos) {
      sset = sset.substr(found+1,sset.length());
      sset.push_back(s[i]);
    }else{
      sset.push_back(s[i]);
    }
    longest = std::max(longest,sset.length());
  }
  
  return (int)longest;
}



int main(int argc, char *argv[]) {
    cout<<lengthOfLongestSubstring("abcabcbb")<<endl;

    return 0;
}
