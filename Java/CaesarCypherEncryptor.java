class Program {
  public static String caesarCypherEncryptor(String str, int key) {
    // Write your code here.
		key = key%26;
		char [] result = new char[str.length()];
		for(int i=0;i<str.length();++i){
			int code = (int)str.charAt(i)+ key;
			code = code<=122? code: 96 + code%122;
			result[i] = (char)code;
		}
    return new String(result);
  }
}
