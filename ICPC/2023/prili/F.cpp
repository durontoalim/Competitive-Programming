#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t; cin>>t;

    map<string,int>mp;
    map<string,int>mp_mail;
    map<string,int>mp_blood;
    map<int,int>mp_string;
    string time[1200+10], mail[1200+10], date[1200+10], blood_group[1200+10], str[1200+10];
    int year_arr[1200+10];
    vector<pair<string,pair<int,pair<int,int>>>>v(t);
    for(int i=0; i<t; i++)
    {
        
        cin>>time[i]>>mail[i]>>date[i]>>blood_group[i];
        for (int j = 6; j < 10; j++)
        {
            str[i] += date[i][j];
        }

        // covert string to int
        stringstream geek(str[i]);
        int x = 0;
        geek >> x;
        year_arr[i] = x;

        mp_string[year_arr[i]]++;

        
        mp_blood[blood_group[i]]++;

    }
    

    for (int i = t-1; i >= 0 ; i--)
    {
        int xd = mp_mail[mail[i]]++;
        
        if(xd > 0){
            mp_blood[blood_group[i]]--;
            mp_string[year_arr[i]]--;
        }
    }

    for(int i=0; i<1; i++)
    {
        cout<<"A+ "<<mp_blood["A+"]<<endl;
        cout<<"A- "<<mp_blood["A-"]<<endl;
        cout<<"AB+ "<<mp_blood["AB+"]<<endl;
        cout<<"AB- "<<mp_blood["AB-"]<<endl;
        cout<<"B+ "<<mp_blood["B+"]<<endl;
        cout<<"B- "<<mp_blood["B-"]<<endl;
        cout<<"O+ "<<mp_blood["O+"]<<endl;
        cout<<"O- "<<mp_blood["O-"]<<endl;
    }
    
    for (auto i: mp_string)
    {
        if(i.second > 0){
            cout<<i.first<<" "<<i.second<<endl;
        }
    }
    


    return 0;
}