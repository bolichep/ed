#!/bin/bash
touch ${1^}.cpp ${1^}.h main.cpp
echo "Creating ${1^}"
echo "#include \"${1^}.h\"" >> ${1^}.cpp
echo -e "#ifndef ${1^^}_H\n#define ${1^^}_H\n\n\n#endif" >> ${1^}.h
echo -e "#include <iostream>\n\nusing namespace std;\n\nint main(){\n  return 0;\n}" > main.cpp
make -f ~/U/ED/C/template.mak build
