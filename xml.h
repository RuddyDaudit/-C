xelement_t* create_xelement(const char* name);
xattribute_t* add_xattribute(xelement_t* e, const char* name, const char* value);
void add_sub_xelement(xelement_t* e, xelement_t* s);
void add_raw(xelement_t* e, const char* r);
void delete_xelement(xelement_t* e);