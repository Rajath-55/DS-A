
function isMonotonic(array) {
  // Write your code here.
	let count1 = true;
	let count2=true;
	for(let i =1;i<array.length;++i){
		if (array[i]<array[i-1]) count1 = false;
		if(array[i]>array[i-1]) count2 = false;
	}
	return count1||count2;
}

// Do not edit the line below.
exports.isMonotonic = isMonotonic;
