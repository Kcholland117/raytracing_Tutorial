#ifndef SPHEREH
#define SPHEREH

#include "hitable.h"

class sphere : public hitable {
	public: 
		sphere() {}
		sphere(vec3 cen, float r) : center(cen), radius(r) {};
		virtual bool hit(ray& r, float tmin, float tmax, hit_record& rec) const;
		vec3 center;
		float radius;
};

bool sphere::hit(const ray& r, float t_min, float t_max, hit_record& rec) const {
	vec3 oc = r.orgin() - center;
	float a = dot(r.direction(), r.direction());
	float b = dot(oc, r.direction());
	float c = dot(oc, oc) - radius * radius;
	float discriminant = b * b - a * c;
	

}
