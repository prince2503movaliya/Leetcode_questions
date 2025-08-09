class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stack;
        stringstream ss(path);
        string component;

        while (getline(ss, component, '/')) {
            if (component == "" || component == ".") {
                continue;
            } else if (component == "..") {
                if (!stack.empty()) {
                    stack.pop_back();
                }
            } else {
                stack.push_back(component);
            }
        }

        string simplified_path = "/";
        for (int i = 0; i < stack.size(); i++) {
            simplified_path += stack[i];
            if (i < stack.size() - 1) {
                simplified_path += "/";
            }
        }

        return simplified_path;
    }
};
