/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
   
    let newarr=[];
    for(let i=0;i<arr.length;i++)
    {
      let idx =fn(arr[i],i);
      if(idx) newarr.push(arr[i]);
    }
    return newarr;
};