#ifndef PHYSICSOBJECT_H
#define PHYSICSOBJECT_H

class PhysicsObject {
  public:
    glm::vec3 d_vel = {0,0,0};
    glm::vec3 d_pos = {0,50,0};

    PhysicsObject() = default;
    virtual ~PhysicsObject() = default;
    virtual void physicsUpdate() = 0;
    //virtual void setPos(const glm::vec3& pos) = 0;
    //virtual void setVel(const glm::vec3& vel) = 0;

};

#endif
