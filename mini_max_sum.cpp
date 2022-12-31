#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



void miniMaxSum(vector<int> v) {
    
    vector<long long int> v1;
    for(int i=0;i<v.size();i++){
        long long int  sum=0;
        for(int j=0;j<v.size();j++){
             if(i!=j){
            sum=sum+v[j];
            }  
        }
        v1.push_back(sum);
        }
        long long int max=0;
    long long int min=v1[0];
    for(int i=0;i<v1.size();i++){
        if(max<v1[i]){
            max=v1[i];
        }
        if(min>v1[i]){
            min=v1[i];
        }
    }
    cout<<min<<" "<<max;
}
int main()
{

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
