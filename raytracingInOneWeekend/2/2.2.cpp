#include <iostream>

int main() {
    // Image

    int image_width = 256;
    int image_height = 256;

    // Render
    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    bool checks {false};
    for (int j = 0; j < image_height; ++j){
        std::clog << "\rScanlines remaining: " << (image_height - j) << ' ' << std::flush;
        for (int i = 0; i < image_width; ++i){
            auto r = double(i) / (image_width-1);
            auto g = double(j) / (image_height-1);
            auto b = 0.0;
            
            if (j % 20 == 0 && i % 40 == 0)
            {
                if (checks == false)
                {
                    checks = true;
                } else{
                    checks = false;
                }
            }

            if(checks)
            {
                b = 255;
                r = 0.0;
                g = 0.0;
            }

            int ir = int(255.999 * r);
            int ig = int(255.999 * g);
            int ib = int(255.999 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << "\n";            
        }
    }
}