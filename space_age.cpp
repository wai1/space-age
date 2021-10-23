#include "space_age.h"

namespace space_age {

	// Time in seconds for planet's orbital period
	static constexpr double earth_year_seconds{ 31557600 };

	static constexpr double mercury_year_seconds{ earth_year_seconds * 0.240846 };
	static constexpr double venus_year_seconds{ earth_year_seconds * 0.61519726 };
	static constexpr double mars_year_seconds{ earth_year_seconds * 1.8808158 };
	static constexpr double jupiter_year_seconds{ earth_year_seconds * 11.862615 };
	static constexpr double saturn_year_seconds{ earth_year_seconds * 29.447498 };
	static constexpr double uranus_year_seconds{ earth_year_seconds * 84.016846 };
	static constexpr double neptune_year_seconds{ earth_year_seconds * 164.79132 };

	double space_age::seconds() const 
	{
	  return seconds_age; 
	}

	double space_age::on_earth() const
	{ 
		return (seconds_age / earth_year_seconds);
	}

	double space_age::on_mercury() const
	{
		return (seconds_age / mercury_year_seconds);
	}

	double space_age::on_venus() const
	{
		return (seconds_age / venus_year_seconds);
	}

	double space_age::on_mars() const
	{
		return (seconds_age / mars_year_seconds);
	}
	
	double space_age::on_jupiter() const
	{
		return (seconds_age / jupiter_year_seconds);
	}

	double space_age::on_saturn() const
	{
		return (seconds_age / saturn_year_seconds);
	}

	double space_age::on_uranus() const
	{
		return (seconds_age / uranus_year_seconds);
	}

	double space_age::on_neptune() const
	{
		return (seconds_age / neptune_year_seconds);
	}
	
}  // namespace space_age
