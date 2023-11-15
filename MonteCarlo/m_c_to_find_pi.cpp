#include <iostream>
#include <cstdlib>
#include <ctime>
#include <omp.h>

int main()
{
    const int num_points = 1000000;
    int num_points_inside = 0;

    // Set the seed for random number generation
    std::srand(static_cast<unsigned>(std::time(0)));

    // Get the starting time
    double start_time = omp_get_wtime();

#pragma omp parallel for reduction(+ : num_points_inside)
    for (int i = 0; i < num_points; ++i)
    {
        // Generate random coordinates in the square [-1, 1] x [-1, 1]
        double x = static_cast<double>(std::rand()) / RAND_MAX * 2 - 1;
        double y = static_cast<double>(std::rand()) / RAND_MAX * 2 - 1;

        // Check if the point is inside the quarter circle
        if (x * x + y * y <= 1)
        {
            num_points_inside++;
        }
    }

    // Get the ending time
    double end_time = omp_get_wtime();

    // Calculate and print the estimated value of π
    double pi_estimate = 4.0 * num_points_inside / num_points;
    std::cout << "Estimated Pi: " << pi_estimate << std::endl;

    // Calculate and print the execution time
    double execution_time = end_time - start_time;
    std::cout << "Execution Time: " << execution_time << " seconds" << std::endl;

    return 0;
}
