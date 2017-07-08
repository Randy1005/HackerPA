#include <iostream>

using namespace std;

int main(){
	int num;
	int rem;
	int ans[100];
	int i=0;
	bool ok=false;
	while(true){
		for(int k=0; k<100; k++){
			ans[k] = 0;
		}
		cout << "十進位轉二進位\n輸入數字:" << endl;
		cin >> num;
	
		while(num != 0){
			rem = num % 2;
			num /= 2;
			ans[i] = rem;
			i++;
		}
		for(int j=100;j>=0;j--){
			if(ans[j] == 1){
				ok = true;
			}
			if(ok == true){
				cout << ans[j];
			}
		}
		cout << endl;
		ok = false;
		i = 0;
	}
}
