/**
 * @file core/simulator/entity/medium_entity.h
 *
 * @author Carlo Pinciroli - <cpinciroli@ulb.ac.be>
 */

#ifndef MEDIUM_ENTITY_H
#define MEDIUM_ENTITY_H

namespace argos {
   class CMediumEntity;
}

#include <argos3/core/simulator/entity/entity.h>

namespace argos {
   class CMediumEntity : public CEntity {

   public:

      typedef std::vector<CMediumEntity*> TVector;
      typedef std::map<std::string, CMediumEntity*> TMap;

   public:

      CMediumEntity(CEntity* pc_parent) :
         CEntity(pc_parent) {}
      virtual ~CMediumEntity() {}

      virtual void Update() = 0;

      inline virtual std::string GetTypeDescription() const {
         return "medium_entity";
      }

   };

}

#endif
