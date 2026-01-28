#include <iostream>
#include <vector>

using namespace std;

long long n;
vector<long long> p(n);
long long total;
long long ans=99999999999;  // a large difference that makes any difference value replaceable


void GroupDifference(int index, long long sum1){
    if(index==n){
        long long sum2=total-sum1;
        long long diff=sum1-sum2;
        if(diff<0) diff=-diff;
        if(diff<ans) ans=diff;
        return;
    }
    GroupDifference(index+1, sum1+p[index]); // add current element to group 1
    GroupDifference(index+1, sum1);  // do not add current element to group 1(add to group 2)
}

int main(){
    
    cin >> n;
    p.resize(n);
    total=0;
    for(int i=0;i<n;i++){
        cin >> p[i];
        total += p[i];
    }
    GroupDifference(0,0);
    cout << ans << endl;
    return 0;
}