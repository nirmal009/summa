    #include <stdio.h>    
         
    int main()    
    {    
        //Initialize array
      int arr[5];
      for(int i=0; i<5; i++){
	scanf("%d",&arr[i]);
      
        //Calculate length of array arr    
        int length = sizeof(arr)/sizeof(arr[0]);    
            
        printf("Duplicate elements in given array: \n");    
        //Searches for duplicate element    
        for(int i = 0; i < length; i++) {    
            for(int j = i + 1; j < length; j++) {    
	      if(arr[i] == arr[j]){   
		  printf("%d\n", arr[j]);    
            }    
        }    
}
}
      for(int i=0; i<5; i++){
	printf("%d\n",arr[i]);
      }

      
    
    }
