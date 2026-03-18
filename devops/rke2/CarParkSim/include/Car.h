/**
 * @file Car.h
 * @brief Car entity representing a vehicle in the car park simulation.
 *
 * Each Car object is created by a Producer thread and consumed by a Consumer thread.
 * The Car stores its unique ID, assigned color, arrival time, and current status.
 */

#ifndef CAR_H
#define CAR_H

#include <SFML/Graphics.hpp>
#include <chrono>
#include <string>

/**
 * @enum CarStatus
 * @brief Represents the current state of a car in the simulation.
 */
enum class CarStatus {
    ARRIVING,   ///< Car is approaching the parking lot
    PARKED,     ///< Car is occupying a parking spot
    DEPARTING,  ///< Car is leaving the parking spot
    EXITED      ///< Car has left the parking lot
};

/**
 * @class Car
 * @brief Represents a single vehicle in the car park simulation.
 *
 * Encapsulates all properties of a car including its identity,
 * visual appearance, timing data, and current status.
 */
class Car {
public:
    /**
     * @brief Constructs a new Car with the given ID.
     * @param id Unique identifier for this car (must be >= 0).
     */
    explicit Car(int id);

    /**
     * @brief Constructs a new Car with a specific ID and color.
     * @param id    Unique identifier for this car.
     * @param color The SFML color used to render this car.
     */
    Car(int id, sf::Color color);

    /** @brief Default destructor. */
    ~Car() = default;

    // ── Getters ──────────────────────────────────────────────────────

    int getId() const;
    sf::Color getColor() const;
    CarStatus getStatus() const;
    std::chrono::steady_clock::time_point getArrivalTime() const;
    std::chrono::steady_clock::time_point getParkedTime() const;

    /**
     * @brief Calculates wait time in ms from arrival to parking.
     * @return Wait time in ms, or -1 if not yet parked.
     */
    double getWaitTimeMs() const;

    /** @brief Returns "Car #<id>" string. */
    std::string toString() const;

    // ── Setters ──────────────────────────────────────────────────────

    void setStatus(CarStatus status);
    void markParked();
    void markDeparting();

    // ── Utility ──────────────────────────────────────────────────────

    /** @brief Generates a random color from a predefined palette. */
    static sf::Color generateRandomColor();

private:
    int                                    carId_;
    sf::Color                              color_;
    CarStatus                              status_;
    std::chrono::steady_clock::time_point  arrivalTime_;
    std::chrono::steady_clock::time_point  parkedTime_;

    void validateId(int id) const;
};

#endif // CAR_H
