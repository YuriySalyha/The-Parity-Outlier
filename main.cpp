// i have array with at least 3 numbers and it can be eternal. And only one number can be odd or even.
//So all numbers will be for exsample odd except one number that will be even and vice versa.
int FindOutlier(std::vector<int> arr)
{
    bool isEven;
    int result;
    int odd = 0;
    int even = 0;
    // here i determine is arr mostly odd or even
    for(int i = 0; i < 3; i++){
      if(arr[i] % 2 == 0){
        even++;
      }
      else{
        odd++;
      }
    }
    if(odd > even){
      isEven = false;
    }
    else{
      isEven = true;
    }
    // here the main part of the code where i find one unique number.
    for(int i = 0; i < arr.size(); i++){
      if(isEven && arr[i] % 2 != 0){
        result = arr[i];
      }
      else if(!isEven && arr[i] % 2 == 0){
        result = arr[i];
      }
    }
    return result;
}
