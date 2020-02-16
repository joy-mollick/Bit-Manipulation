

    #include <bits/stdc++.h>
    using namespace std;
    int main(){
    	int n,k;
    	cin>>n>>k;
    	int arr[n];
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    	}
    	vector<int>last_set_bit(30,INT_MIN);
    	vector<int>res(n);
    	for(int i=0;i<n;i++){
    		for(int j=0;j<30;j++){
    			if((arr[i]>>j)&1){last_set_bit[j]=i;}
    			if(i<=k+last_set_bit[j]){res[i]|=(1<<j);}
    		}
    	}
    	for(int l=0;l<n;l++) cout<<res[l]<<" ";
    	cout<<endl;
    }

