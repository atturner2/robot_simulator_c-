/**
 * @file mobile_arena_entity.h
 *
 * @copyright 2017 3081 Staff, All rights reserved.
 */

#ifndef PROJECT_ITERATION1_SRC_ARENA_MOBILE_ENTITY_H_
#define PROJECT_ITERATION1_SRC_ARENA_MOBILE_ENTITY_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <algorithm>
#include "src/arena_entity.h"
#include "src/event_base_class.h"
#include "src/event_recharge.h"
#include "src/event_collision.h"
#include "src/color.h"

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
NAMESPACE_BEGIN(csci3081);

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
class ArenaMobileEntity : public ArenaEntity {
 public:
  ArenaMobileEntity(double radius, double collision_delta,
                    const Position& pos, const Color& color) :
      ArenaEntity(radius, pos, color),
      collision_delta_(collision_delta) {}
  bool is_mobile(void) { return true; }
  virtual double get_heading_angle(void) const = 0;
  virtual void set_heading_angle(double heading_angle) = 0;
  virtual double get_speed(void) = 0;
  virtual void set_speed(double sp) = 0;
  double collision_delta(void) const { return collision_delta_; }
  void TimestepUpdate(uint dt);
  virtual void Accept(EventCollision * e) = 0;
  virtual void Accept(EventRecharge * e) = 0;

 private:
  double collision_delta_;
};

NAMESPACE_END(csci3081);

#endif  // PROJECT_ITERATION1_SRC_ARENA_MOBILE_ENTITY_H_
