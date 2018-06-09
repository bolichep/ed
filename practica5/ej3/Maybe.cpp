struct MNode {
  bool   maybe;
  void * value;
}

Maybe nothing(){
  mb = new MNode;
  mb->maybe = false;
  return mb;
}

Maybe just(void& value){
  mb = new MNode;
  mb->maybe = true;
  mb->value = value;
  return mb;
}

void * fromJust(Maybe a){
  return a->value;
}

bool isNothing(Maybe a){
  return a->maybe;
}

