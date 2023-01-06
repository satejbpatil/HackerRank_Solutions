
class SumInLeavesVisitor extends TreeVis {
    int sumInLeaves = 0;
    public int getResult() {
        return sumInLeaves;
    }
    public void visitNode(TreeNode node) {
        // empty return
    }
    public void visitLeaf(TreeLeaf leaf) {
        sumInLeaves += leaf.getValue();
    }
}
class ProductOfRedNodesVisitor extends TreeVis {
    long productOfRedNodes = 1L;
    public int getResult() {
        return (int) (productOfRedNodes);
    }
    void multiply(Tree tree) {
        if (tree.getColor() == Color.RED)
            productOfRedNodes = (productOfRedNodes * tree.getValue()) % (1000000007);
    }
    public void visitNode(TreeNode node) {
        multiply(node);
    }
    public void visitLeaf(TreeLeaf leaf) {
        multiply(leaf);
    }
}
class FancyVisitor extends TreeVis {
    int sumOfValuesNonLeafEvenDepth = 0;
    int sumOfValuesGreenLeaf = 0;
    public int getResult() {
        return Math.abs(sumOfValuesGreenLeaf - sumOfValuesNonLeafEvenDepth);
    }
    public void visitNode(TreeNode node) {
        if (node.getDepth() % 2 != 0) return;
        sumOfValuesNonLeafEvenDepth += node.getValue();
    }
    public void visitLeaf(TreeLeaf leaf) {
        if (leaf.getColor() != Color.GREEN) return;
        sumOfValuesGreenLeaf += leaf.getValue();
    }
}
