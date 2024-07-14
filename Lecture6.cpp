
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cout << "ENTER NUMBER: ";
// 	cin >> n;
// 	int ans=0;
// 	int i=0;
// 	while(n!=0){
// 		int bit = n & 1;
// 		ans = (bit * pow(10,i) )+ ans;
// 		n=n >> 1;
// 		i++;
// 	}
// 	cout << "ANSWER IS : " << ans << endl;
// }
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cout << "ENTER NUMBER: ";
 	cin >> n;
 	int i=0;
 	int ans=0;
 	while(n!=0){
 		int bit= n %10;
 		if (bit==1){
 			ans=ans+pow(2,i);
 			
 		}
 		n=n/10;
 		i++;
 	}
 	cout << ans << endl;
}