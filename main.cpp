#include<bits/stdc++.h>
using namespace std;
// ==========================Prime number fun====================================
bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
// ==================GCD(without recursion)(euclids gcd algo)=====================================
int GCD(int a, int b){
    if(b==0) return a;
    if(a==0) return b;
    while(a != b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}
//==================Count prime number (steve of eratosthenes)===================
 int countPrimes(int n) {
        int count = 0;
        vector<bool> prime(n+1, true);
        prime[0] = prime[1] = false;
        for(int i = 2; i<n; i++){
            if(prime[i]){
                count++;
                for(int j=2*i; j<n; j=j+i){
                    prime[j] = 0;
                }
            }
        }
        return count;
    }
//========================{odd even funtion}=====================================
bool checkEven(int n){
    if(n%2==0) return 1;
    return 0;
}
//===============================================================================
 
//===============================================================================
void solve(){
    
}
//===============================================================================
int main(){
    solve();
    return 0;
}