class Protocol{
    constructor(name,size){
        this.name = name;
        this.size = size;
    }
}
v = new Protocol('http',128)

console.log(v.name())