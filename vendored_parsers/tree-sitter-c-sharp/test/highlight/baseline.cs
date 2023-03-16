extern alias A;
//            ^ punctuation.delimiter

using System;
// <- keyword
//          ^ punctuation.delimiter
using global::System.Collections.Generic;
// <- keyword
//                  ^ punctuation.delimiter
//                              ^ punctuation.delimiter
//                                      ^ punctuation.delimiter
using static System.Console;
// <- keyword
//                 ^ punctuation.delimiter
//                         ^ punctuation.delimiter
using X = System.Console;
// <- keyword
//      ^ operator
//              ^ punctuation.delimiter
//                      ^ punctuation.delimiter
global using A;
//     ^ keyword
//            ^ punctuation.delimiter
global using static A.B;
//     ^ keyword
//                   ^ punctuation.delimiter
//                     ^ punctuation.delimiter

namespace Namespace
// <- keyword
//        ^ type
{
// <- punctuation.bracket
    using A;
    // <- keyword
    //     ^ punctuation.delimiter

    internal delegate void A(params int[] test);
    // <- keyword
    //       ^ keyword
    //                ^ type.builtin
    //                      ^ punctuation.bracket
    //                       ^ keyword
    //                              ^ type.builtin
    //                                 ^ punctuation.bracket
    //                                        ^ punctuation.bracket
    public struct F<T> where T : struct { }
    // <- keyword
    //     ^ keyword
    //            ^ type
    //             ^ operator
    //              ^ property.definition
    //               ^ operator
    //                 ^ keyword
    //                       ^ property.definition
    //                         ^ operator
    //                           ^ keyword
    //                                  ^ punctuation.bracket
    //                                    ^ punctuation.bracket

    record struct F
    // <- keyword
    //     ^ keyword
    //            ^ type
    {
    // <- punctuation.bracket
        int Age { get; init; }
        // <- type.builtin
        //  ^ variable
        //      ^ punctuation.bracket
        //        ^ keyword
        //           ^ punctuation.delimiter
        //             ^ keyword
        //                 ^ punctuation.delimiter
        //                   ^ punctuation.bracket
    }
    // <- punctuation.bracket

    [Nice]
    // <- punctuation.bracket
     // <- type
    //   ^ punctuation.bracket
    private record F<T1, T2> where T1 : I1, I2, new() where T2 : I2 { }
    // <- keyword
    //      ^ keyword
    //             ^ type
    //              ^ operator
    //               ^ property.definition
    //                 ^ punctuation.delimiter
    //                   ^ property.definition
    //                     ^ operator
    //                       ^ keyword
    //                             ^ property.definition
    //                                ^ operator
    //                                  ^ type
    //                                    ^ punctuation.delimiter
    //                                      ^ type
    //                                        ^ punctuation.delimiter
    //                                          ^ keyword
    //                                             ^ punctuation.bracket
    //                                                ^ keyword
    //                                                      ^ property.definition
    //                                                         ^ operator
    //                                                           ^ type
    //                                                              ^ punctuation.bracket
    //                                                                ^ punctuation.bracket

    record Teacher(string FirstName, string LastName, string Subject) : Person(FirstName, LastName);
    // <- keyword
    //     ^ type
    //            ^ punctuation.bracket
    //             ^ type.builtin
    //                    ^ variable.parameter
    //                             ^ punctuation.delimiter
    //                               ^ type.builtin
    //                                      ^ variable.parameter
    //                                              ^ punctuation.delimiter
    //                                                ^ type.builtin
    //                                                       ^ variable.parameter
    //                                                              ^ punctuation.bracket
    //                                                                ^ operator
    //                                                                        ^ punctuation.bracket
    //                                                                                  ^ punctuation.delimiter
    //                                                                                            ^ punctuation.bracket

    enum B { Ten = 10, Twenty = 20 }
    // <- keyword
    //   ^ type
    //     ^ punctuation.bracket
    //       ^ property.definition
    //           ^ operator
    //             ^ number
    //               ^ punctuation.delimiter
    //                 ^ property.definition
    //                        ^ operator
    //                          ^ number
    //                             ^ punctuation.bracket

    public class F : object, IAlpha, IOmega { }
    // <- keyword
    //     ^ keyword
    //           ^ type
    //             ^ operator
    //               ^ type.builtin
    //                     ^ punctuation.delimiter
    //                       ^ type
    //                             ^ punctuation.delimiter
    //                               ^ type
    //                                      ^ punctuation.bracket
    //                                        ^ punctuation.bracket

    public partial class Class<in TParam> where TParam : class?, notnull, F?
    // <- keyword
    //     ^ keyword
    //             ^ keyword
    //                   ^ type
    //                        ^ operator
    //                         ^ keyword
    //                            ^ property.definition
    //                                  ^ operator
    //                                    ^ keyword
    //                                          ^ property.definition
    //                                                 ^ operator
    //                                                   ^ keyword
    //                                                        ^ operator
    //                                                                  ^ punctuation.delimiter
    //                                                                    ^ type.builtin
    //                                                                     ^ operator
    {
    // <- punctuation.bracket
        public event EventHandler<T> SomeEvent { add { } remove { } }
        // <- keyword
        //     ^ keyword
        //           ^ type
        //                       ^ operator
        //                        ^ type
        //                         ^ operator
        //                                     ^ punctuation.bracket
        //                                           ^ punctuation.bracket
        //                                             ^ punctuation.bracket
        //                                                      ^ punctuation.bracket
        //                                                        ^ punctuation.bracket
        //                                                          ^ punctuation.bracket
        public readonly int _B;
        // <- keyword
        //     ^ keyword
        //              ^ type.builtin
        //                  ^ variable
        //                   ^ variable
        //                    ^ punctuation.delimiter
        Int64 D_e_f, g;
        // <- type
        //    ^ variable
        //     ^ variable
        //      ^ variable
        //       ^ variable
        //        ^ variable
        //         ^ punctuation.delimiter
        //           ^ variable
        //            ^ punctuation.delimiter
        Tuple<char, Nullable<int>> z;
        // <- type
        //   ^ operator
        //    ^ type.builtin
        //        ^ punctuation.delimiter
        //          ^ type
        //                  ^ operator
        //                   ^ type.builtin
        //                      ^ operator
        //                         ^ variable
        //                          ^ punctuation.delimiter

        [SomeAttribute]
        // <- punctuation.bracket
         // <- type
        //            ^ punctuation.bracket
        public static int operator +(A a) { return 0; }
        // <- keyword
        //     ^ keyword
        //            ^ type.builtin
        //                ^ keyword
        //                         ^ operator
        //                           ^ type
        //                             ^ variable.parameter
        //                              ^ punctuation.bracket
        //                                ^ punctuation.bracket
        //                                  ^ keyword
        //                                         ^ number
        //                                          ^ punctuation.delimiter
        //                                            ^ punctuation.bracket

        uint GetSet { get; set; }
        // <- type.builtin
        //   ^ variable
        //          ^ punctuation.bracket
        //            ^ keyword
        //               ^ punctuation.delimiter
        //                 ^ keyword
        //                    ^ punctuation.delimiter
        //                      ^ punctuation.bracket

        static extern Foo() { }
        // <- keyword
        //     ^ keyword
        //            ^ type
        //               ^ punctuation.bracket
        //                  ^ punctuation.bracket
        //                    ^ punctuation.bracket

        extern ~Class() { }
        //     ^ operator
        //      ^ type
        //           ^ punctuation.bracket
        //              ^ punctuation.bracket
        //                ^ punctuation.bracket

        public void Method()
        // <- keyword
        //     ^ type.builtin
        //                ^ punctuation.bracket
        {
        // <- punctuation.bracket
            const int dec = 1_2;
            // <- keyword
            //    ^ type.builtin
            //        ^ variable
            //            ^ operator
            //              ^ number
            //               ^ number
            //                ^ number
            //                 ^ punctuation.delimiter
            const long hex = 0xf_1l;
            // <- keyword
            //    ^ type.builtin
            //         ^ variable
            //             ^ operator
            //               ^ number
            //                  ^ number
            //                   ^ number
            //                     ^ punctuation.delimiter
            const long hex2 = 0Xffff;
            // <- keyword
            //    ^ type.builtin
            //         ^ variable
            //              ^ operator
            //                ^ number
            //                      ^ punctuation.delimiter
            const long hex3 = 0x_0_f;
            // <- keyword
            //    ^ type.builtin
            //         ^ variable
            //              ^ operator
            //                ^ number
            //                  ^ number
            //                   ^ number
            //                    ^ number
            //                     ^ number
            //                      ^ punctuation.delimiter
            const UInt64 dec = 1uL;
            // <- keyword
            //    ^ type
            //           ^ variable
            //               ^ operator
            //                 ^ number
            //                    ^ punctuation.delimiter
            const UInt16 bin = 0b0100_100;
            // <- keyword
            //    ^ type
            //           ^ variable
            //               ^ operator
            //                 ^ number
            //                       ^ number
            //                        ^ number
            //                           ^ punctuation.delimiter
            const UInt16 bin2 = 0B01010__10;
            // <- keyword
            //    ^ type
            //           ^ variable
            //                ^ operator
            //                  ^ number
            //                         ^ number
            //                           ^ number
            //                             ^ punctuation.delimiter
            const long bin3 = 0b_0_10;
            // <- keyword
            //    ^ type.builtin
            //         ^ variable
            //              ^ operator
            //                ^ number
            //                  ^ number
            //                   ^ number
            //                    ^ number
            //                     ^ number
            //                       ^ punctuation.delimiter

            const bool t = true, u = false;
            // <- keyword
            //    ^ type.builtin
            //         ^ variable
            //           ^ operator
            //             ^ constant.builtin
            //                 ^ punctuation.delimiter
            //                   ^ variable
            //                     ^ operator
            //                       ^ constant.builtin
            //                            ^ punctuation.delimiter

            const char c = 'a';
            // <- keyword
            //    ^ type.builtin
            //         ^ variable
            //           ^ operator
            //             ^ string
            //              ^ string
            //               ^ string
            const char esc = '\n';
            // <- keyword
            //    ^ type.builtin
            //         ^ variable
            //             ^ operator
            //               ^ string
            //                 ^ keyword
            //                  ^ string
            const char hex = '\xf09a';
            // <- keyword
            //    ^ type.builtin
            //         ^ variable
            //             ^ operator
            //               ^ string
            //                 ^ keyword
            //                      ^ string
            const char uni16 = '\ua0bf';
            // <- keyword
            //    ^ type.builtin
            //         ^ variable
            //               ^ operator
            //                 ^ string
            //                   ^ keyword
            //                        ^ string
            const char uni32 = '\UA0BFf9ca';
            // <- keyword
            //    ^ type.builtin
            //         ^ variable
            //               ^ operator
            //                 ^ string
            //                   ^ keyword
            //                            ^ string

            const float s = 012.23F;
            // <- keyword
            //    ^ type.builtin
            //          ^ variable
            //            ^ operator
            //              ^ number
            //                 ^ number
            //                  ^ number
            //                     ^ punctuation.delimiter
            const float e = 1e6f;
            // <- keyword
            //    ^ type.builtin
            //          ^ variable
            //            ^ operator
            //              ^ number
            //                  ^ punctuation.delimiter
            const Single en = 0e-1f;
            // <- keyword
            //    ^ type
            //           ^ variable
            //              ^ operator
            //                ^ number
            //                  ^ number
            //                   ^ number
            //                     ^ punctuation.delimiter
            const Single ep = 1_1e+12f;
            // <- keyword
            //    ^ type
            //           ^ variable
            //              ^ operator
            //                ^ number
            //                 ^ number
            //                  ^ number
            //                    ^ number
            //                     ^ number
            //                        ^ punctuation.delimiter
            const double d = 0.9_9d;
            // <- keyword
            //    ^ type.builtin
            //           ^ variable
            //             ^ operator
            //               ^ number
            //                ^ number
            //                 ^ number
            //                  ^ number
            //                   ^ number
            //                     ^ punctuation.delimiter
            const double e = .4_9d;
            // <- keyword
            //    ^ type.builtin
            //           ^ variable
            //             ^ operator
            //               ^ number
            //                ^ number
            //                 ^ number
            //                  ^ number
            //                    ^ punctuation.delimiter
            const decimal m = 0_1_2.9m;
            // <- keyword
            //    ^ type.builtin
            //            ^ variable
            //              ^ operator
            //                ^ number
            //                 ^ number
            //                  ^ number
            //                   ^ number
            //                    ^ number
            //                     ^ number
            //                      ^ number
            //                        ^ punctuation.delimiter
            const Decimal m2 = 102.349M;
            // <- keyword
            //    ^ type
            //            ^ variable
            //               ^ operator
            //                 ^ number
            //                    ^ number
            //                     ^ number
            //                         ^ punctuation.delimiter

            const string x = null;
            // <- keyword
            //    ^ type.builtin
            //           ^ variable
            //             ^ operator
            //               ^ constant.builtin
            //                   ^ punctuation.delimiter

            String e = "";
            // <- type
            //     ^ variable
            //       ^ operator
            //         ^ string
            string s = "a";
            // <- type.builtin
            //     ^ variable
            //       ^ operator
            //         ^ string
            //          ^ string
            //           ^ string
            string m = "abc";
            // <- type.builtin
            //     ^ variable
            //       ^ operator
            //         ^ string
            //          ^ string
            //             ^ string
            string esc = "ab\"\t";
            // <- type.builtin
            //     ^ variable
            //         ^ operator
            //           ^ string
            //            ^ string
            //              ^ keyword
            //                 ^ keyword
            //                  ^ string
            string hex = "ab\x22r";
            // <- type.builtin
            //     ^ variable
            //         ^ operator
            //           ^ string
            //            ^ string
            //              ^ keyword
            //               ^ keyword
            //                   ^ string

            int @var = @const;
            // <- type.builtin
            //  ^ variable
            //   ^ variable
            //       ^ operator
            //               ^ punctuation.delimiter


            var x = $"""The point {X}, {Y} is {Math.Sqrt(X * X + Y * Y)} from the origin""";
            // <- type.builtin
            //  ^ variable
            //    ^ operator
            //                    ^ punctuation.bracket
            //                      ^ punctuation.bracket
            //                         ^ punctuation.bracket
            //                           ^ punctuation.bracket
            //                                ^ punctuation.bracket
            //                                     ^ punctuation.delimiter
            //                                          ^ punctuation.bracket
            //                                           ^ variable
            //                                             ^ operator
            //                                               ^ variable
            //                                                 ^ operator
            //                                                   ^ variable
            //                                                     ^ operator
            //                                                       ^ variable
            //                                                        ^ punctuation.bracket

            List<int> numbers = new() { 5, 4, 1, 3, 9, 8, 6, 7, 2, 0 };
            // <- type
            //  ^ operator
            //   ^ type.builtin
            //      ^ operator
            //        ^ variable
            //                ^ operator
            //                  ^ keyword
            //                     ^ punctuation.bracket
            //                        ^ punctuation.bracket
            //                          ^ number
            //                           ^ punctuation.delimiter
            //                             ^ number
            //                              ^ punctuation.delimiter
            //                                ^ number
            //                                 ^ punctuation.delimiter
            //                                   ^ number
            //                                    ^ punctuation.delimiter
            //                                      ^ number
            //                                       ^ punctuation.delimiter
            //                                         ^ number
            //                                          ^ punctuation.delimiter
            //                                            ^ number
            //                                             ^ punctuation.delimiter
            //                                               ^ number
            //                                                ^ punctuation.delimiter
            //                                                  ^ number
            //                                                   ^ punctuation.delimiter
            //                                                     ^ number
            //                                                       ^ punctuation.bracket

            var query =
            // <- type.builtin
            //  ^ variable
            //        ^ operator
                from num in numbers
                // <- keyword
                //   ^ variable
                //       ^ keyword
                //          ^ variable
                where num < 3 || num > 7
                // <- keyword
                //    ^ variable
                //        ^ operator
                //          ^ number
                //            ^ operator
                //               ^ variable
                //                   ^ operator
                //                     ^ number
                orderby num ascending
                select num;
                // <- keyword
                //     ^ variable
                //        ^ punctuation.delimiter

            var u = x is int?
            // <- type.builtin
            //  ^ variable
            //    ^ operator
            //        ^ keyword
            //           ^ type.builtin
            //              ^ operator
                ? a
                // <- operator
                //^ variable
                : b;
                // <- operator
                //^ variable
                // ^ punctuation.delimiter
            a = (B)c + (C)d;
            // <- variable
            //^ operator
            //  ^ punctuation.bracket
            //   ^ type
            //    ^ punctuation.bracket
            //     ^ variable
            //       ^ operator
            //         ^ punctuation.bracket
            //          ^ type
            //           ^ punctuation.bracket
            //            ^ variable
            //             ^ punctuation.delimiter
            b = (float)a[0];
            // <- variable
            //^ operator
            //  ^ punctuation.bracket
            //   ^ type.builtin
            //        ^ punctuation.bracket
            //          ^ punctuation.bracket
            //           ^ number
            //            ^ punctuation.bracket
            var x = new
            // <- type.builtin
            //  ^ variable
            //    ^ operator
            //      ^ keyword
            {
            // <- punctuation.bracket
            };
            // <- punctuation.bracket
            var three = checked(1 + 2);
            // <- type.builtin
            //  ^ variable
            //        ^ operator
            //          ^ keyword
            //                 ^ punctuation.bracket
            //                  ^ number
            //                    ^ operator
            //                      ^ number
            //                       ^ punctuation.bracket
            var d = delegate (int a)
            // <- type.builtin
            //  ^ variable
            //    ^ operator
            //      ^ keyword
            //               ^ punctuation.bracket
            //                ^ type.builtin
            //                    ^ variable.parameter
            //                     ^ punctuation.bracket
            {
            // <- punctuation.bracket
                return a;
                // <- keyword
                //     ^ variable
                //      ^ punctuation.delimiter
            };
            // <- punctuation.bracket

            var l = (A a, B b) => { return a.c(b); };
            // <- type.builtin
            //  ^ variable
            //    ^ operator
            //      ^ punctuation.bracket
            //       ^ type
            //         ^ variable.parameter
            //          ^ punctuation.delimiter
            //            ^ type
            //              ^ variable.parameter
            //               ^ punctuation.bracket
            //                 ^ operator
            //                    ^ punctuation.bracket
            //                      ^ keyword
            //                             ^ variable
            //                              ^ punctuation.delimiter
            //                               ^ variable
            //                                ^ punctuation.bracket
            //                                 ^ variable
            //                                  ^ punctuation.bracket
            //                                     ^ punctuation.bracket

            Do(async () => { });
            //^ punctuation.bracket
            // ^ keyword
            //       ^ punctuation.bracket
            //          ^ operator
            //             ^ punctuation.bracket
            //               ^ punctuation.bracket

            var gp = __makeref(g);
            // <- type.builtin
            //  ^ variable
            //     ^ operator
            //                ^ punctuation.bracket
            //                  ^ punctuation.bracket

            var z = typeof(List<string>.Enumerator);
            // <- type.builtin
            //  ^ variable
            //    ^ operator
            //      ^ keyword
            //            ^ punctuation.bracket
            //             ^ type
            //                 ^ operator
            //                  ^ type.builtin
            //                        ^ operator
            //                                    ^ punctuation.bracket

            ref VeryLargeStruct reflocal = ref veryLargeStruct;
            // <- keyword
            //                  ^ variable
            //                           ^ operator
            //                             ^ keyword
            //                                                ^ punctuation.delimiter
            ref var elementRef = ref arr[0];
            // <- keyword
            //  ^ type.builtin
            //      ^ variable
            //                 ^ operator
            //                   ^ keyword
            //                          ^ punctuation.bracket
            //                           ^ number
            //                            ^ punctuation.bracket

            var x = name is (var a);
            // <- type.builtin
            //  ^ variable
            //    ^ operator
            //           ^ keyword
            //              ^ punctuation.bracket
            //                    ^ punctuation.bracket
            var x = c is < '0' or >= 'A' and <= 'Z';
            // <- type.builtin
            //  ^ variable
            //    ^ operator
            //        ^ keyword
            //           ^ operator
            //             ^ string
            //              ^ string
            //               ^ string
            //                       ^ string
            //                        ^ string
            //                         ^ string
            //                                  ^ string
            //                                   ^ string
            //                                    ^ string
            var x = !this.Call();
            // <- type.builtin
            //  ^ variable
            //    ^ operator
            //      ^ operator
            //       ^ keyword
            //           ^ punctuation.delimiter
            //                ^ punctuation.bracket

        }
        // <- punctuation.bracket

        void Sample()
        // <- type.builtin
        //         ^ punctuation.bracket
        {
        // <- punctuation.bracket
            while (true) break;
            // <- keyword
            //    ^ punctuation.bracket
            //     ^ constant.builtin
            //         ^ punctuation.bracket
            //           ^ keyword
            //                ^ punctuation.delimiter
            throw ex;
            // <- keyword
            //      ^ punctuation.delimiter
            do { } while (a);
            // <- keyword
            // ^ punctuation.bracket
            //   ^ punctuation.bracket
            //     ^ keyword
            //           ^ punctuation.bracket
            //             ^ punctuation.bracket
            goto end;
            // <- keyword
            //      ^ punctuation.delimiter
        end:
        // ^ operator
            return;
            // <- keyword
            //    ^ punctuation.delimiter
            if (true) return 1;
            // <- keyword
            // ^ punctuation.bracket
            //  ^ constant.builtin
            //      ^ punctuation.bracket
            //        ^ keyword
            //               ^ number
            //                ^ punctuation.delimiter
            else return 0;
            // <- keyword
            //   ^ keyword
            //          ^ number
            //           ^ punctuation.delimiter

            (string a, bool b) c = default;
            // <- punctuation.bracket
             // <- type.builtin
            //       ^ punctuation.delimiter
            //         ^ type.builtin
            //               ^ punctuation.bracket
            //                 ^ variable
            //                   ^ operator
            //                     ^ keyword
            //                            ^ punctuation.delimiter
            switch (a, a)
            // <- keyword
            //     ^ punctuation.bracket
            //       ^ punctuation.delimiter
            //          ^ punctuation.bracket
            {
            // <- punctuation.bracket
                case (1, 1):
                // <- keyword
                //   ^ punctuation.bracket
                //    ^ number
                //     ^ punctuation.delimiter
                //       ^ number
                //        ^ punctuation.bracket
                    return 1;
                    // <- keyword
                    //     ^ number
                    //      ^ punctuation.delimiter
                default:
                // <- keyword
                //     ^ operator
                    return 0;
                    // <- keyword
                    //     ^ number
                    //      ^ punctuation.delimiter
            }
            // <- punctuation.bracket

            lock (this)
            // <- keyword
            //   ^ punctuation.bracket
            //    ^ keyword
            //        ^ punctuation.bracket
            {
            // <- punctuation.bracket
                return;
                // <- keyword
                //    ^ punctuation.delimiter
            }
            // <- punctuation.bracket

            yield return 1;
            // <- keyword
            //    ^ keyword
            //           ^ number
            //            ^ punctuation.delimiter

            using (Stream a = File.OpenRead("a"), b = new BinaryReader(a))
            // <- keyword
            //    ^ punctuation.bracket
            //     ^ type
            //            ^ variable
            //              ^ operator
            //                    ^ punctuation.delimiter
            //                             ^ punctuation.bracket
            //                               ^ string
            //                                ^ string
            //                                    ^ variable
            //                                      ^ operator
            //                                        ^ keyword
            //                                                        ^ punctuation.bracket
            //                                                          ^ punctuation.bracket
            {
            // <- punctuation.bracket
                return;
                // <- keyword
                //    ^ punctuation.delimiter
            }
            // <- punctuation.bracket

            foreach (var (x, y) in z)
            // <- keyword
            //      ^ punctuation.bracket
            //       ^ type.builtin
            //           ^ punctuation.bracket
            //             ^ punctuation.delimiter
            //                ^ punctuation.bracket
            //                  ^ keyword
            //                      ^ punctuation.bracket
                q += x;
                // <- variable
                //^ operator
                //   ^ variable
                //    ^ punctuation.delimiter

            for (int x = 0; x < 100; x++)
            // <- keyword
            //  ^ punctuation.bracket
            //   ^ type.builtin
            //       ^ variable
            //         ^ operator
            //           ^ number
            //            ^ punctuation.delimiter
            //              ^ variable
            //                ^ operator
            //                  ^ number
            //                     ^ punctuation.delimiter
            //                       ^ variable
            //                        ^ operator
            {
            // <- punctuation.bracket
                z += x;
                // <- variable
                //^ operator
                //   ^ variable
                //    ^ punctuation.delimiter
            }
            // <- punctuation.bracket

            dynamic dyn = "";
            // <- type
            //      ^ variable
            //          ^ operator
            //            ^ string
        }
        // <- punctuation.bracket

        string b(Object operation) =>
        // <- type.builtin
        //      ^ punctuation.bracket
        //       ^ type
        //              ^ variable.parameter
        //                       ^ punctuation.bracket
        //                         ^ operator
            operation switch
            // <- variable
            //        ^ keyword
            {
            // <- punctuation.bracket
                1 => "one",
                // <- number
                //^ operator
                //   ^ string
                //    ^ string
                //       ^ string
                _ => "more",
                //^ operator
                //   ^ string
                //    ^ string
                //        ^ string
            };
            // <- punctuation.bracket
    }
    // <- punctuation.bracket

}
// <- punctuation.bracket
