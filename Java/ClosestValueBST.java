class Program {
  public static int findClosestValueInBst(BST tree, int target) {
    // Write your code here.
		int diff = Integer.MAX_VALUE;
		BST tree1 = tree;
		BST temp = tree;
		while(temp!=null && temp.value!=target){
			int d = Math.abs(temp.value - target);
			if(d<diff){
				diff=d;
				tree1=temp;
			}
			if(target > temp.value){
				temp = temp.right;
			}else if(target<temp.value){
				temp = temp.left;
			}
		}
		if(temp!=null && temp.value==target){
			tree1 = temp;
		}
		
		
    return tree1.value;
  }

  static class BST {
    public int value;
    public BST left;
    public BST right;

    public BST(int value) {
      this.value = value;
    }
  }
}




