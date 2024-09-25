/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isIsomorphic = function(s, t) {
const arr_s = new Array(256);  // Creates an array with 256 empty slots
const arr_t = new Array(256);  // Creates another array with 256 empty slots
arr_s.fill(0);  // Fills arr_s with 0
arr_t.fill(0);  // Fills arr_t with 0

    for(let i=0;i<s.length;i++)
    {
        let s_code = s.charCodeAt(i);
        let t_code = t.charCodeAt(i);
        if(arr_t[t_code]===0 && arr_s[s_code]===0)
        {
            arr_s[s_code] = t[i];
            arr_t[t_code]  = 1;
        }
    }
    for(let i=0;i<s.length;i++)
    {
        let s_code = s.charCodeAt(i);
        if(arr_s[s_code] !== t[i]) return false;
        
    }
   
    return true;


};