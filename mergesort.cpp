#include<iostream>
using namespace std;


void combine(int arr[],si,mid,eni){
    int merged[]=new int[eni-si+1];
    int indx1=si;
    int indx2=mid+1;
    int x=0;

    while(indx1<=mid && indx2<=eni){
        if(arr[indx1]<=arr[indx2]){
            merged[x]=arr[indx1];
            indx1++;
            x++;
        }else{
            merged[x]=arr[indx2];
            indx2++;
            x++;
        }
    }
    while(indx1<=mid){
        merged[x]=arr[indx1];
        indx1++;
        x++;
    }
    while(indx2<=eni){
        merged[x]=arr[indx2];
        indx2++;
        x++;
    }
  for(int i=0,j=0; i<eni-si+1; i++,j++){
      arr[i]=merged[j];
  }
    
}

void divide(int arr[],int si,int eni){
    if(si>=eni){
        return
    }
    else{
        int mid=(si+eni)/2;
        divide(arr,si,mid);
        divide(arr,mid+1,eni);
        combine(arr,si,mid,eni);
    }
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};

    int n=arr.length();
    cout<<n<<endl;
    //divide(arr,0,n-1);

}