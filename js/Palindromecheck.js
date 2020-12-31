function isPalindrome(string) {
  // Write your code here.
	let rev=""
	for(let i=string.length-1;i>=0;--i){
		rev +=string[i]
	}
	return string==rev;
}

// Do not edit the line below.
exports.isPalindrome = isPalindrome;
