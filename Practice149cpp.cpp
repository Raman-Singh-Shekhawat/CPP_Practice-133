// 150. Contains x: Given a generic tree and an integer x, check if x is present in the given tree or not. Return true if x is present, return false otherwise.

/************************************************************

    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;

        TreeNode(T data) {
            this->data = data;
        }

        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/

bool isPresent(TreeNode<int> *root, int x)
{

    if (!root)
    {

        return 0;
    }

    if (root->data == x)
    {

        return 1;
    }

    for (int i = 0; i < root->children.size(); i++)
    {

        bool val = isPresent(root->children[i], x);

        if (val == 1)
        {

            return 1;
        }
    }

    return 0;
}