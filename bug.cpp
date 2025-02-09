std::vector<int> vec; vec.push_back(1); vec.push_back(2); vec.push_back(3); // This code looks alright...

for (int i = 0; i < vec.size(); ++i) {
  vec.erase(vec.begin() + i);
}

// ...but this loop is wrong and will lead to undefined behavior!