
int factorial(int n);
int evenodd(int l);
int prime(int a);

int evenodd(int l){
    if(l%2==0){
        return 0;
    }
    return 1;
}

int count(int a){
    int b=0;
    
    for(int i =1;i<=a;i++){ 
        b+=1;
        }
        if(b==1){
            return 1;
        }
        if(b==2){
            return 2;
        }
        if(b==3){
            return 3;
        }
        if(b==4){
            return 4;
        }
        
    }     
    


int factorial(int n){
    int prod=1;
    for (int i =1;i<=n;i++){
        prod*=i;
    }
    return prod;
}
