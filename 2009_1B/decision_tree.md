# Problem

Decision trees -- in particular, a type called classification trees -- are data structures that are used to classify items into categories using features of those items. For example, each animal is either "cute" or not. For any given animal, we can decide whether it is cute by looking at the animal's features and using the following decision tree.

(0.2 furry
  (0.81 fast
    (0.3)
    (0.2)
  )
  (0.1 fishy
    (0.3 freshwater
      (0.01)
      (0.01)
    )
    (0.1)
  )
)

A decision tree is defined recursively. It always has a root node and a weight. It also, optionally, has a feature name and two sub-trees, which are themselves decision trees.

More formally, a decision tree is defined using the following grammar.

tree ::= (weight [feature tree tree])
weight is a real number between 0 and 1, inclusive
feature is a string of 1 or more lower case English letters

The part inside the square brackets, [], is optional. The parentheses, (), weight and feature are tokens. There will be at least one whitespace character between any two tokens, except (possibly) after an open-bracket '(' or before a close-bracket ')'. Whitespace characters are space (' ') and endline ('\n').

To figure out how likely the animal is to be cute, we start at the root of the tree with probability p set to 1. At each node, we multiply p by the weight of the node. If the node is a leaf (has no sub-trees), then we stop, and the value of p is the probability that our animal is cute. Otherwise, we look at the feature associated with the node. If our animal has this feature, we move down into the first sub-tree and continue recursively. If it does not have this feature, then we move down into the second sub-tree and continue in the same way.

For example, a beaver is an animal that has two features: furry and freshwater. We start at the root with p equal to 1. We multiply p by 0.2, the weight of the root and move into the first sub-tree because the beaver has the furry feature. There, we multiply p by 0.81, which makes p equal to 0.162. From there we move further down into the second sub-tree because the beaver does not have the fast feature. Finally, we multiply p by 0.2 and end up with 0.0324 -- the probability that the beaver is cute.

You will be given a decision tree and a list of animals with their features. For each item, you need to return the probability that the animal is cute.

## Input

The first line of input contains a single integer, N, the number of test cases. N test cases follow.

Each test case description will start with a line that contains an integer L -- the number of lines that describe a decision tree. The next L lines will contain a decision tree in the format described above. The line after that will contain A -- the number of animals. The next A lines will each contain the description of one animal in the following format.

animal n feature1 feature2 ... featuren
