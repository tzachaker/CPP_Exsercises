// #include <iostream>
// #include "sources/MagicalContainer.hpp"

// using namespace ariel;
// // int main() {
// //     // Create a MagicalContainer and add some elements
// //     MagicalContainer container;
// //     container.addElement(17);
// //     container.addElement(2);
// //     container.addElement(25);
// //     container.addElement(9);
// //     container.addElement(3);

// //     // Print container size
// //     std::cout << "Size of container: " << container.size() << std::endl;

// //     // Use AscendingIterator to display elements in ascending order
// //     std::cout << "Elements in ascending order:\n";
// //     MagicalContainer::AscendingIterator ascIter(container);
// //     for (auto it = ascIter.begin(); it != ascIter.end(); ++it) {
// //         std::cout << *it << ' ';   // 2 3 9 17 25
// //     }
// //     std::cout << std::endl;

// //     // Use DescendingIterator to display elements in descending order
// //     std::cout << "Elements in cross order:\n";
// //     MagicalContainer::SideCrossIterator crossIter(container);
// //     for (auto it = crossIter.begin(); it != crossIter.end(); ++it) {
// //         std::cout << *it << ' ';  // 2 25 3 17 9
// //     }
// //     std::cout << std::endl;

// //     // Use PrimeIterator to display prime numbers only
// //     std::cout << "Prime numbers:\n";
// //     MagicalContainer::PrimeIterator primeIter(container);
// //     for (auto it = primeIter.begin(); it != primeIter.end(); ++it) {
// //         std::cout << *it << ' ';  // 2 3 17 
// //     }
// //     std::cout << std::endl;

// //     // Remove an element from the container and display the size
// //     container.removeElement(9);
// //     std::cout << "Size of container after removing an element: " << container.size() << std::endl;

// //     return 0;

// int main() {
//     std::cout << std::endl;
//     std::cout << "*** My additions : ***" <<  std::endl;
//     // Create a MagicalContainer and add some elements
//     MagicalContainer container;
//     container.addElement(19);
//     container.addElement(32);
//     container.addElement(2);
//     container.addElement(6);
//     container.addElement(5);
//     container.addElement(29);

//     // Print container size
//     std::cout << "container's size : " << container.size() << std::endl;
//     std::cout << "Ascending elements :\n";
//     MagicalContainer::AscendingIterator ascIter(container);
//     for (auto it = ascIter.begin(); it != ascIter.end(); ++it) {
//         std::cout << *it << ' ';   // 2 5 6 19 29 32
//     }
//     std::cout << std::endl;
//     std::cout << "SideCross elements :\n";
//     MagicalContainer::SideCrossIterator crossIter(container);
//     for (auto it = crossIter.begin(); it != crossIter.end(); ++it) {
//         std::cout << *it << ' ';  // 2 32 5 29 6 19
//     }
//     std::cout << std::endl;
//     std::cout << "Prime elements :\n";
//     MagicalContainer::PrimeIterator primeIter(container);
//     for (auto it = primeIter.begin(); it != primeIter.end(); ++it) {
//         std::cout << *it << ' ';  // 2 5 19 29 
//     }
//     std::cout << std::endl;
//     // add and remove an element from the container and display the size
//     container.addElement(15);
//     std::cout << "Size of container after adding an element: " << container.size() << std::endl;
//     container.removeElement(6);
//     std::cout << "Size of container after removing an element: " << container.size() << std::endl;

//     return 0;
// }


#include <iostream>
#include "sources/MagicalContainer.hpp"

using namespace ariel;
int main() {
    /*Add, Remove and Size*/
     {
        MagicalContainer container;
        if(container.size() == 0){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        container.addElement(1);//1
         if(container.size() == 1){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        container.addElement(2);// 1 2
         if(container.size() == 2){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
         //Removing an existing element
        container.removeElement(2);// 1
         if(container.size() == 1){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        container.removeElement(1);// now the container should be empty
         if(container.size() == 0){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
    }

    /*MagicalContainer contains checks*/
    {
        MagicalContainer container;
        container.addElement(1);// 1
        container.addElement(2);// 1 2

        container.removeElement(2);//1
        if(container.size() == 1){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
    }

    /*Iterators with empty containers checks-> end=begin*/
    {
        MagicalContainer container;
        //AscendingIterator
        MagicalContainer::AscendingIterator ascIter(container);
        if(ascIter.begin() == ascIter.end()){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        if(container.size() == 0){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        //SideCrossIterator
        MagicalContainer::SideCrossIterator crossIter(container);
        if(crossIter.begin() == crossIter.end()){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        if(container.size() == 0){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        //PrimeIterator
        MagicalContainer::PrimeIterator primeIter(container);
        if(primeIter.begin() == primeIter.end()){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        if(container.size() == 0){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
    }

    /*Iterators with a single element in containers checks*/
    {
        MagicalContainer container;
        container.addElement(3);
        if(container.size() == 1){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};

        //AscendingIterator
        MagicalContainer::AscendingIterator ascIter(container);
        if(*ascIter.begin() == 3){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};

        //SideCrossIterator
        MagicalContainer::SideCrossIterator sCrossIter(container);
        if(*sCrossIter.begin() == 3){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};

//    PrimeIterator
        MagicalContainer::PrimeIterator primeIter(container);
        //prime and single number
        if(*primeIter.begin() == 3){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        // and with not prime number
        MagicalContainer container_1;
        container_1.addElement(4);
        MagicalContainer::PrimeIterator primeIter_(container_1);
        if(container_1.size() == 1){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
    }

    /*SideCrossIterator odd number of elements*/
    {
        //Odd number
        MagicalContainer container;
        container.addElement(1);
        container.addElement(2);
        container.addElement(3);
        container.addElement(4);
        container.addElement(5);
        if (container.size() == 5){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        MagicalContainer::SideCrossIterator crossIter(container);
        std::vector<int> crossOrderElements;
        for (auto it = crossIter.begin(); it != crossIter.end(); ++it) {
            crossOrderElements.push_back(*it);
        }
        std::vector<int> temp_vector = std::vector<int>({1, 5, 2, 4, 3});
        //One from the start, one from the end
        if(crossOrderElements[0] == 1){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        if(crossOrderElements[1] == 5){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        if(crossOrderElements[2] == 2){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        if(crossOrderElements[3] == 4){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        if(crossOrderElements[4] == 3){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};

    }

    /*SideCrossIterator even number of elements*/
    {
        //Even number
        MagicalContainer container;
        container.addElement(1);
        container.addElement(2);
        container.addElement(3);
        container.addElement(4);
        container.addElement(5);
        container.addElement(6);
        if(container.size() == 6){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        MagicalContainer::SideCrossIterator crossIter_(container);
        if(*crossIter_ == 1){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        ++crossIter_;
        if(*crossIter_ == 6){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        ++crossIter_;
        if(*crossIter_ == 2){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        ++crossIter_;
        if(*crossIter_ == 5){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        ++crossIter_;
        if(*crossIter_ == 3){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        ++crossIter_;
        if(*crossIter_ == 4){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        ++crossIter_;
        if(crossIter_ == crossIter_.end()){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};


    }
    /*PrimeIterator with prime and not prime elements*/
    {
        MagicalContainer container;
        container.addElement(4);
        container.addElement(3);
        container.addElement(6);
        container.addElement(9);
        container.addElement(2);

        MagicalContainer::PrimeIterator primeIter(container);
        if(*primeIter == 2){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        ++primeIter;
        if(*primeIter == 3){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        ++primeIter;
        if(primeIter == primeIter.end()){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
    }

    /*Ascending Iterator checks*/
    {
        MagicalContainer elements_;
        elements_.addElement(11);
        elements_.addElement(-1);
        elements_.addElement(13);
        elements_.addElement(4);

        //size is 4
        if(elements_.size() == 4){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};

        MagicalContainer::AscendingIterator ascIter(elements_);
        // Check: ++, *
        if(*ascIter == -1){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        ++ascIter;
        if(*ascIter == 4){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        ++ascIter;
        if(*ascIter == 11){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        ++ascIter;
        if(*ascIter == 13){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        ++ascIter;
        if(ascIter == ascIter.end()){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};

    }

    // Test case for comparing iterators from the same container
    /*Comparing iterators from the same container */
    {
        MagicalContainer container;
        for (int i = 1; i <= 10; ++i) {
            container.addElement(i);
        }

        //Comparing AscendingIterator with itself
        //Check operators
        {
            MagicalContainer::AscendingIterator it1(container);
            MagicalContainer::AscendingIterator it2(container);
            //First they are the same
            if(it1 == it2){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if(!(it1 != it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if(!(it1 < it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if(!(it1 > it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            //Now we will increase it1
            ++it1;
            //And now they are not equal
            if((it1 == it2)){std::cout <<"Not Correct!"<<std::endl;}else {std::cout <<"Correct!"<<std::endl;};
            if((it1 != it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if((it1 > it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if((it1 < it2)){std::cout <<"Not Correct!"<<std::endl;}else {std::cout <<"Correct!"<<std::endl;};
            //Now we will increase it2 to compare them both- i.e they should be the same
            ++it2;
            if(it1 == it2){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if(!(it1 != it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if(!(it1 < it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if(!(it1 > it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        }

        //Comparing SideCrossIterator with itself
        //Check operators

        {
            MagicalContainer::SideCrossIterator it1(container);
            MagicalContainer::SideCrossIterator it2(container);
            //First they are the same
            if(it1 == it2){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if(!(it1 != it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if(!(it1 < it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if(!(it1 > it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            //Now we will increase it1
            ++it1;
            //And now they are not equal
            if((it1 == it2)){std::cout <<"Not Correct!"<<std::endl;}else {std::cout <<"Correct!"<<std::endl;};
            if((it1 != it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if((it1 > it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if((it1 < it2)){std::cout <<"Not Correct!"<<std::endl;}else {std::cout <<"Correct!"<<std::endl;};
            //Now we will increase it2 to compare them both- i.e they should be the same
            ++it2;
            if(it1 == it2){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if(!(it1 != it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if(!(it1 < it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if(!(it1 > it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        }

        //Comparing PrimeIterator with itself
        //Check operators

        {
            MagicalContainer::PrimeIterator it1(container);
            MagicalContainer::PrimeIterator it2(container);
            //First they are the same
            if(it1 == it2){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if(!(it1 != it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if(!(it1 < it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if(!(it1 > it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
//Now we will increase it1
            ++it1;
            //And now they are not equal
            if((it1 == it2)){std::cout <<"Not Correct!"<<std::endl;}else {std::cout <<"Correct!"<<std::endl;};
            if((it1 != it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if((it1 > it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if((it1 < it2)){std::cout <<"Not Correct!"<<std::endl;}else {std::cout <<"Correct!"<<std::endl;};
            //Now we will increase it2 to compare them both- i.e they should be the same
            ++it2;
            if(it1 == it2){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if(!(it1 != it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if(!(it1 < it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
            if(!(it1 > it2)){std::cout <<"Correct!"<<std::endl;}else {std::cout <<"Not correct!"<<std::endl;};
        }
    }

    /*Comparing iterators from NOT the same container (operator= throws when iterators are pointing at different containers)*/
    {
        MagicalContainer container1;
        MagicalContainer container2;

        container1.addElement(1);
        container1.addElement(2);
        container1.addElement(3);

        container2.addElement(4);
        container2.addElement(5);
        container2.addElement(6);

        //AscendingIterator
        {
            MagicalContainer::AscendingIterator it1(container1);
            MagicalContainer::AscendingIterator it2(container2);

//            it1 = it2;// INDEED THROWS!
        }
        //SideCrossIterator
        {
            MagicalContainer::SideCrossIterator it1(container1);
            MagicalContainer::SideCrossIterator it2(container2);

//            it1 = it2;// INDEED THROWS!
        }
        //PrimeIterator
        {
            MagicalContainer::PrimeIterator it1(container1);
            MagicalContainer::PrimeIterator it2(container2);

//            it1 = it2;// INDEED THROWS!
        }
    }

    /* The Demo provided to us*/
    // Create a MagicalContainer and add some elements
    MagicalContainer container;
    container.addElement(17);
    container.addElement(2);
    container.addElement(25);
    container.addElement(9);
    container.addElement(3);

    // Print container size
    std::cout << "Size of container: " << container.size() << std::endl;

    // Use AscendingIterator to display elements in ascending order
    std::cout << "Elements in ascending order:\n";
    MagicalContainer::AscendingIterator ascIter(container);
    for (auto it = ascIter.begin(); it != ascIter.end(); ++it) {
        std::cout << *it << ' ';   // 2 3 9 17 25
    }
    std::cout << std::endl;

    // Use DescendingIterator to display elements in descending order
    std::cout << "Elements in cross order:\n";
    MagicalContainer::SideCrossIterator crossIter(container);
    for (auto it = crossIter.begin(); it != crossIter.end(); ++it) {
        std::cout << *it << ' ';  // 2 25 3 17 9
    }
    std::cout << std::endl;

    // Use PrimeIterator to display prime numbers only
    std::cout << "Prime numbers:\n";
    MagicalContainer::PrimeIterator primeIter(container);
    for (auto it = primeIter.begin(); it != primeIter.end(); ++it) {
        std::cout << *it << ' ';  // 2 3 17 
    }
    std::cout << std::endl;

    // Remove an element from the container and display the size
    container.removeElement(9);
    std::cout << "Size of container after removing an element: " << container.size() << std::endl;

    return 0;
}