#include <iostream>

using namespace std;

int main(){
	unsigned res = 0;
	unsigned num;
	while(true){
		cout << "二進位轉十進位\n輸入：" << endl;
		cin >> num;
		for(int i=0;num>0;i++){
			if(num%10 == 1){
				res += (1 << i);
			}
			num /= 10;
		}
		cout << res << endl;
	}
}
