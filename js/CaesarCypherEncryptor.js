function caesarCipherEncryptor(string, key) {
  // Write your code here.
	const result = [];
	key = key%26;
	for(const letter of string){
		const code = letter.charCodeAt() + key;
		newcode = code<=122? code: 96 + code%122;
		result.push(String.fromCharCode(newcode));
	}
	return result.join('');

}

// Do not edit the line below.
exports.caesarCipherEncryptor = caesarCipherEncryptor;
