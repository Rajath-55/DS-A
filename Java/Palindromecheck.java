class Program {
  public static boolean isPalindrome(String str) {
    // Write your code here.
		String rev="";
		for (int i=str.length()-1;i>=0;--i){
			 rev +=str.charAt(i);
			}
		
    return str.equals(rev);
  }
}
