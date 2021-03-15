#include<bits/stdc++.h>
using namespace std;
void tower(int a,char from,char aux,char to){
    if(a==1){
       cout<< from <<" "<< to <<endl;
       return;
    }
    else{
       tower(a - 1,from,to,aux);
       cout<< from << " " << to << endl;
       tower(a - 1, aux, from, to);
    }
}
int main(){
	int n;
	cin >> n;
	cout << (1 << n) - 1<< endl;
	tower(n, '1', '2', '3');
	return 0;
}
