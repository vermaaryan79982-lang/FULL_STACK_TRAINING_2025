const form = document.getElementById("registrationForm");

const fname = document.getElementById("fname");
const lname = document.getElementById("lname");
const email = document.getElementById("email");
const phone = document.getElementById("phone");
const password = document.getElementById("password");
const dob = document.getElementById("dob");
const country = document.getElementById("country");
const city = document.getElementById("city");

const gender = document.querySelectorAll(".gender");
const skills = document.querySelectorAll(".skill");


// ================================
// ERROR / SUCCESS FUNCTIONS
// ================================

function showError(input, message) {
    input.classList.add("is-invalid");
    input.classList.remove("is-valid");

    const error = document.querySelector("." + input.id + "-error");

    if (error) {
        error.textContent = message;
        error.classList.add("show");
    }
}


function showSuccess(input) {
    input.classList.remove("is-invalid");
    input.classList.add("is-valid");

    const error = document.querySelector("." + input.id + "-error");

    if (error) {
        error.classList.remove("show");
    }
}


// ================================
// FIRST NAME
// ================================

function validateFirstName() {

    const value = fname.value.trim();

    if (value === "") {

        showError(
            fname,
            "First Name is required."
        );

        return false;
    }

    if (value.length < 3) {

        showError(
            fname,
            "First Name must have at least 3 characters."
        );

        return false;
    }

    if (!/^[A-Za-z ]+$/.test(value)) {

        showError(
            fname,
            "First Name can contain only letters."
        );

        return false;
    }

    showSuccess(fname);

    return true;
}


// ================================
// LAST NAME
// ================================

function validateLastName() {

    const value = lname.value.trim();

    if (value === "") {

        showError(
            lname,
            "Last Name is required."
        );

        return false;
    }

    if (value.length < 3) {

        showError(
            lname,
            "Last Name must have at least 3 characters."
        );

        return false;
    }

    if (!/^[A-Za-z ]+$/.test(value)) {

        showError(
            lname,
            "Last Name can contain only letters."
        );

        return false;
    }

    showSuccess(lname);

    return true;
}


// ================================
// EMAIL
// ================================

function validateEmail() {

    const value = email.value.trim();

    const emailPattern =
        /^[^\s@]+@[^\s@]+\.[^\s@]+$/;

    if (value === "") {

        showError(
            email,
            "Email is required."
        );

        return false;
    }

    if (!emailPattern.test(value)) {

        showError(
            email,
            "Please enter a valid email address."
        );

        return false;
    }

    showSuccess(email);

    return true;
}


// ================================
// PHONE
// ================================

function validatePhone() {

    const value = phone.value.trim();

    const phonePattern = /^[0-9]{10}$/;

    if (value === "") {

        showError(
            phone,
            "Phone number is required."
        );

        return false;
    }

    if (!phonePattern.test(value)) {

        showError(
            phone,
            "Phone number must contain exactly 10 digits."
        );

        return false;
    }

    showSuccess(phone);

    return true;
}


// ================================
// PASSWORD
// ================================

function validatePassword() {

    const value = password.value;

    const passwordPattern =
        /^(?=.*[A-Z])(?=.*[a-z])(?=.*[0-9])(?=.*[@$!%*?&]).{6,}$/;

    if (value === "") {

        showError(
            password,
            "Password is required."
        );

        return false;
    }

    if (!passwordPattern.test(value)) {

        showError(
            password,
            "Password must contain uppercase, lowercase, digit, special character and minimum 6 characters."
        );

        return false;
    }

    showSuccess(password);

    return true;
}


// ================================
// DOB
// ================================

function validateDOB() {

    const value = dob.value;

    if (value === "") {

        showError(
            dob,
            "Please select your date of birth."
        );

        return false;
    }

    const selectedDate = new Date(value);
    const today = new Date();

    if (selectedDate > today) {

        showError(
            dob,
            "Date of birth cannot be in the future."
        );

        return false;
    }

    showSuccess(dob);

    return true;
}


// ================================
// GENDER
// ================================

function validateGender() {

    let selected = false;

    gender.forEach(function (item) {

        if (item.checked) {
            selected = true;
        }

    });


    const error = document.querySelector(".gender-error");


    if (!selected) {

        error.classList.add("show");

        return false;
    }


    error.classList.remove("show");

    return true;
}


// ================================
// COUNTRY
// ================================

function validateCountry() {

    const value = country.value;

    if (value === "") {

        showError(
            country,
            "Please select your country."
        );

        return false;
    }

    showSuccess(country);

    return true;
}


// ================================
// CITY
// ================================

function validateCity() {

    const value = city.value.trim();

    if (value === "") {

        showError(
            city,
            "City is required."
        );

        return false;
    }

    if (value.length < 3) {

        showError(
            city,
            "City must have at least 3 characters."
        );

        return false;
    }

    if (!/^[A-Za-z ]+$/.test(value)) {

        showError(
            city,
            "City can contain only letters."
        );

        return false;
    }

    showSuccess(city);

    return true;
}


// ================================
// SKILLS
// ================================

function validateSkills() {

    let selectedSkills = 0;

    skills.forEach(function (skill) {

        if (skill.checked) {
            selectedSkills++;
        }

    });


    const error = document.querySelector(".skills-error");


    if (selectedSkills === 0) {

        error.classList.add("show");

        return false;
    }


    error.classList.remove("show");

    return true;
}


// ================================
// FORM SUBMIT
// ================================

form.addEventListener("submit", function (event) {

    event.preventDefault();


    const firstNameValid = validateFirstName();
    const lastNameValid = validateLastName();
    const emailValid = validateEmail();
    const phoneValid = validatePhone();
    const passwordValid = validatePassword();
    const dobValid = validateDOB();
    const genderValid = validateGender();
    const countryValid = validateCountry();
    const cityValid = validateCity();
    const skillsValid = validateSkills();


    if (
        firstNameValid &&
        lastNameValid &&
        emailValid &&
        phoneValid &&
        passwordValid &&
        dobValid &&
        genderValid &&
        countryValid &&
        cityValid &&
        skillsValid
    ) {

        alert("Form submitted successfully!");

        form.reset();

        
        document
            .querySelectorAll(".is-valid")
            .forEach(function (input) {
                input.classList.remove("is-valid");
            });

    } else {

        alert("Please fix the errors in the form.");

    }

});


// ================================
// LIVE VALIDATION
// ================================

fname.addEventListener("input", validateFirstName);

lname.addEventListener("input", validateLastName);

email.addEventListener("input", validateEmail);

phone.addEventListener("input", validatePhone);

password.addEventListener("input", validatePassword);

dob.addEventListener("change", validateDOB);

city.addEventListener("input", validateCity);

country.addEventListener("change", validateCountry);


// Gender live validation
gender.forEach(function (item) {

    item.addEventListener("change", validateGender);

});


// Skills live validation
skills.forEach(function (item) {

    item.addEventListener("change", validateSkills);

});