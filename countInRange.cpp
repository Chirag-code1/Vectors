int countInRangecountInRange(vector<int> v, int min, int max)
{
    int minIndex=0, maxIndex=0, count=0;
     bool flag=0, isSame=0;
     if(v.size() == 0){
         return 0;
     } else {
    for(int i=0; i<v.size() ; i++){
        if(v[i] == min){
            minIndex = i;
            flag = true;
            isSame = true;
        }
         if(v[i] == min-1 && isSame !=true){
            minIndex = i;
            flag = true;
            isSame = false;
        }
        if(flag == true && v[i] == max){
            flag = false;
            maxIndex = i;
        }
        if(flag == true){
            count++;
        }
       
            if(i == v.size()-1 && isSame == false && flag!=false)
           { count =0;}
    }
    return count;
     }
}
