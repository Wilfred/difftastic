class var
//     ^ type
{
    void M()
    {
        var var = new var();
        // <- type.builtin
        //   ^ variable
    }
}
