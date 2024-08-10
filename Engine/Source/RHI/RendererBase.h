//
// Created by Sebastian on 10/08/2024.
//

#ifndef RENDERERBASE_H
#define RENDERERBASE_H

namespace AVGE
{
    namespace RHI
    {
        class RendererBase
        {
        public:
            virtual bool Init();

            virtual void Shutdown();

        };
    }
}

#endif //RENDERERBASE_H
