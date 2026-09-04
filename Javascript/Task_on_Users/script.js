let usersList = [];

const searchBox = document.querySelector("#search");
const result = document.querySelector("#result");


fetch("https://jsonplaceholder.typicode.com/users")
    .then(function (res) {

        if (!res.ok) {
            throw new Error("Failed to fetch users");
        }

        return res.json();
    })
    .then(function (data) {

        usersList = data;

        showUsers(usersList);
    })
    .catch(function (error) {

        result.innerHTML = `<p>${error.message}</p>`;
    });


function showUsers(users) {

    let output = `
        <table>
            <thead>
                <tr>
                    <th>Name</th>
                    <th>Email</th>
                    <th>Address</th>
                    <th>Phone</th>
                    <th>Company</th>
                </tr>
            </thead>
            <tbody>
    `;

    users.forEach(function (user) {

        output += `
            <tr>
                <td>${user.name}</td>
                <td>${user.email}</td>

                <td>
                    ${user.address.street},
                    ${user.address.city},
                    ${user.address.zipcode}
                </td>

                <td>${user.phone}</td>

                <td>${user.company.name}</td>
            </tr>
        `;
    });

    output += `
            </tbody>
        </table>
    `;

    result.innerHTML = output;
}


searchBox.addEventListener("input", function () {

    const value = this.value.trim();

    if (value === "") {
        showUsers(usersList);
        return;
    }

    const pattern = new RegExp(value, "i");

    const resultUsers = usersList.filter(function (user) {

        return pattern.test(
            user.name +
            " " +
            user.email +
            " " +
            user.address.street +
            " " +
            user.address.city +
            " " +
            user.address.zipcode +
            " " +
            user.phone +
            " " +
            user.company.name
        );
    });

    showUsers(resultUsers);
});