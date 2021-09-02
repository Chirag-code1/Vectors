void removeConsecutiveDups(vector<int> &v){
    int i=0;
    while(i < v.size()){
        if(v[i] == v[i+1] && i != v.size()-1){
            v.erase(v.begin()+i);
        }
        else {
             i+=1;
        }
     }
}
