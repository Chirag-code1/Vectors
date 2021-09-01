// Write the switchPairs() function as specified above
void switchPairs(vector <int> &v){

    int i, temp, lastOdd =0 ;
    if(v.size()%2 != 0){
       lastOdd =  v[v.size()-1];
    }
    for(i =1;i <v.size(); i+=2){
        temp = v[i];
        v[i] = v[i-1];
        v[i-1] = temp;
        temp=0;

    }
    if(v.size()%2 != 0){
      v[v.size()-1] = lastOdd;
    }
}
