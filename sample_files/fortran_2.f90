! A Fortran module for numerical integration
! Added more integration methods and error handling
module integration
    use, intrinsic :: iso_fortran_env, only: dp => real64
    implicit none
    private
    public :: trapezoid_f, simpson_f, gaussian_f

contains

    ! Trapezoidal rule integration with double precision
    function trapezoid_f(f, a, b, n) result(integral)
        implicit none
        real(dp), external :: f
        real(dp), intent(in) :: a, b
        integer, intent(in) :: n
        real(dp) :: integral

        real(dp) :: h, x
        integer :: i

        if (n < 1) then
            print *, "Error: n must be positive"
            integral = 0.0_dp
            return
        end if

        h = (b - a) / real(n, kind=dp)
        integral = 0.5_dp * (f(a) + f(b))

        do i = 1, n-1
            x = a + i * h
            integral = integral + f(x)
        end do

        integral = integral * h
    end function trapezoid_f

    ! Simpson's rule integration with double precision
    function simpson_f(f, a, b, n) result(integral)
        implicit none
        real(dp), external :: f
        real(dp), intent(in) :: a, b
        integer, intent(in) :: n
        real(dp) :: integral

        real(dp) :: h, x
        integer :: i

        if (mod(n, 2) /= 0) then
            print *, "Error: n must be even for Simpson's rule"
            integral = 0.0_dp
            return
        end if

        h = (b - a) / real(n, kind=dp)
        integral = f(a) + f(b)

        do i = 1, n-1
            x = a + i * h
            if (mod(i, 2) == 0) then
                integral = integral + 2.0_dp * f(x)
            else
                integral = integral + 4.0_dp * f(x)
            end if
        end do

        integral = integral * h / 3.0_dp
    end function simpson_f

    ! Gaussian quadrature integration (3-point)
    function gaussian_f(f, a, b) result(integral)
        implicit none
        real(dp), external :: f
        real(dp), intent(in) :: a, b
        real(dp) :: integral

        real(dp) :: x(3), w(3), midpoint, half_width

        ! 3-point Gaussian quadrature weights and points
        x = [ -0.7745966692414834_dp, 0.0_dp, 0.7745966692414834_dp ]
        w = [ 0.5555555555555556_dp, 0.8888888888888888_dp, 0.5555555555555556_dp ]

        midpoint = 0.5_dp * (a + b)
        half_width = 0.5_dp * (b - a)

        integral = half_width * (w(1) * f(midpoint + half_width * x(1)) + &
                                 w(2) * f(midpoint + half_width * x(2)) + &
                                 w(3) * f(midpoint + half_width * x(3)))
    end function gaussian_f

end module integration

program main
    use integration
    use, intrinsic :: iso_c_binding, only: c_double
    implicit none
    real(dp) :: a, b, result_trapezoid, result_simpson, result_gaussian
    integer :: n

    a = 0.0_dp
    b = acos(0.0_dp) * 2.0_dp  ! 2*pi
    n = 1000

    result_trapezoid = trapezoid_f(sin_dp, a, b, n)
    result_simpson = simpson_f(sin_dp, a, b, n)
    result_gaussian = gaussian_f(sin_dp, a, b)

    print *, "Integration bounds: [", a, ", ", b, "]"
    print *, "Number of intervals: ", n
    print *, "Trapezoid rule result: ", result_trapezoid
    print *, "Simpson's rule result: ", result_simpson
    print *, "Gaussian quadrature result: ", result_gaussian

contains

    ! Double precision sine function
    function sin_dp(x) result(y)
        real(dp), intent(in) :: x
        real(dp) :: y
        y = sin(x)
    end function sin_dp

end program main