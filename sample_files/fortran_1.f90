! A simple Fortran module for numerical integration
module integration
    implicit none

contains

    ! Trapezoidal rule integration
    function trapezoid_f(f, a, b, n) result(integral)
        implicit none
        real, external :: f
        real, intent(in) :: a, b
        integer, intent(in) :: n
        real :: integral

        real :: h, x
        integer :: i

        h = (b - a) / real(n)
        integral = 0.5 * (f(a) + f(b))

        do i = 1, n-1
            x = a + i * h
            integral = integral + f(x)
        end do

        integral = integral * h
    end function trapezoid_f

    ! Simpson's rule integration
    function simpson_f(f, a, b, n) result(integral)
        implicit none
        real, external :: f
        real, intent(in) :: a, b
        integer, intent(in) :: n
        real :: integral

        real :: h, x
        integer :: i

        if (mod(n, 2) /= 0) then
            print *, "Error: n must be even for Simpson's rule"
            integral = 0.0
            return
        end if

        h = (b - a) / real(n)
        integral = f(a) + f(b)

        do i = 1, n-1
            x = a + i * h
            if (mod(i, 2) == 0) then
                integral = integral + 2.0 * f(x)
            else
                integral = integral + 4.0 * f(x)
            end if
        end do

        integral = integral * h / 3.0
    end function simpson_f

end module integration

program main
    use integration
    implicit none
    real :: a, b, result_trapezoid, result_simpson

    a = 0.0
    b = 3.14159

    result_trapezoid = trapezoid_f(sin, a, b, 1000)
    result_simpson = simpson_f(sin, a, b, 1000)

    print *, "Trapezoid rule result: ", result_trapezoid
    print *, "Simpson's rule result: ", result_simpson

end program main