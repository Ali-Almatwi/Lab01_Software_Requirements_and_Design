# HospitalCRM System Analysis and Modeling

This project involves the analysis of requirements and UML-based modeling of the HospitalCRM system using the RM2PT tool.

## Introduction

The objectives of this project are:
- To understand and apply requirements analysis techniques.
- To develop proficiency in UML modeling methodologies.
- To utilize RM2PT for generating interactive prototypes.

This project revisits a previous modeling attempt, the HotelManagementSystem project, to reflect on lessons learned and apply them in the HospitalCRM system analysis.

## Hotel Management System

The initial HotelManagementSystem project encountered challenges due to its high complexity and expansive scope. These challenges included:
- Managing model integrity.
- Implementing accurate OCL contracts.
- Validating intricate interdependencies.

This experience highlighted the need for an iterative, focused approach concentrating on essential features.

## HospitalCRM System Analysis and Validation

### Introduction

The HospitalCRM system is designed to enhance patient relationship management and care delivery across healthcare facilities. Its key capabilities include:
- Patient information and appointment management.
- Access to medical records and ensuring data security.
- Analytics for staff and feedback collection from patients.
- User-friendly tools and interfaces.

### Natural Language Requirements

The project documented major system functions using structured user stories. These stories follow a standard template covering stakeholders, needs, and benefits.
// UPLOAD PHOTO 
### UML Requirements Model

The UML model captures the operational aspects of the system:
- **Use Case Diagram:** Illustrates high-level user-system interactions through actors and their actions. For example, the "View Medical History" use case.
  ![2c422f06-91f8-4b26-bcfa-43079db3940f](https://github.com/Ali-Almatwi/Lab01_Software_Requirements_and_Design/assets/148684334/c8d70b7d-f223-4547-aab1-f3e0f87d0123)

- **Sequence Diagrams:** Describe specific system operation flows. For example, the steps involved in appointment scheduling.
![1c063f71-e292-4819-a7cb-dfde43434e82](https://github.com/Ali-Almatwi/Lab01_Software_Requirements_and_Design/assets/148684334/91d37e37-ce9a-435b-937d-e755e11e4168)

- **Class Diagram:** Defines the main real-world entities in the system and their relationships. For example, the association between Patient and Doctor classes with the Appointment class.
  ![138d1874-e471-4277-85fb-474c344f76a6](https://github.com/Ali-Almatwi/Lab01_Software_Requirements_and_Design/assets/148684334/8a69fe96-740a-4971-9e8f-cedab3d75a64)

- **OCL Contracts:** Establish formal rules and constraints. For example, ensuring that the doctor exist.
  ![5eed0801-769e-456c-ba91-7947a843558b](https://github.com/Ali-Almatwi/Lab01_Software_Requirements_and_Design/assets/148684334/63f369e0-faf9-4bb5-a35a-f130e9c874bf)


### Prototype Generation


The use of RM2PT for automated prototype creation enabled the visualization of interactions and the validation of requirements. These prototypes facilitated the simulation of workflows.
![prto](https://github.com/Ali-Almatwi/Lab01_Software_Requirements_and_Design/assets/148684334/7e44a501-0154-4da0-a410-27427b8daa73)
![7431b12f-1d67-43cf-a48c-cc130ae78777](https://github.com/Ali-Almatwi/Lab01_Software_Requirements_and_Design/assets/148684334/d24e26d3-0544-4209-a068-7a2ecaeb70be)
![51713323-0805-4b52-9109-5b4d84089359](https://github.com/Ali-Almatwi/Lab01_Software_Requirements_and_Design/assets/148684334/8d9f849c-3dfd-443d-bccd-62622409ef59)

## Conclusion

Despite its limitations, RM2PT effectively bridged the gap between theory and implementation, enhancing analytical competencies through practical application.
